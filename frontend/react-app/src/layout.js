import { Inter } from 'next/font/google'
import './ui/globals.css'

const inter = Inter({ subsets: ['latin'] })

export const metadata = {
  title: 'Lama Dev Next.js Admin Dashboard',
  describle: 'Next.js Tutorial',
}

export default function RootLayout({ children }) {
  return (
    <html lang='en'>
      <body className='{inter.ClassName}'>{children}</body>
    </html>
  )
}